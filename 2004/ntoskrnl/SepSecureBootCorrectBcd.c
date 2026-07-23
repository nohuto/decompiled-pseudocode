/*
 * XREFs of SepSecureBootCorrectBcd @ 0x140920BF8
 * Callers:
 *     NtFilterBootOption @ 0x1409207B0 (NtFilterBootOption.c)
 * Callees:
 *     BcdCloseStore @ 0x140770034 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140921064 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x14096B824 (BcdEnumerateObjects.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 SepSecureBootCorrectBcd()
{
  void *v0; // rdi
  NTSTATUS v1; // eax
  int updated; // ebx
  char *PoolWithTag; // r15
  ULONG v4; // r14d
  unsigned __int16 *v5; // rdx
  unsigned int v6; // r12d
  HANDLE v7; // rsi
  _DWORD *v8; // r9
  __int16 v9; // r8
  ULONG ObjectCount; // [rsp+70h] [rbp+40h] BYREF
  const GUID *BufferSize; // [rsp+78h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+80h] [rbp+50h] BYREF
  _BCD_OBJECT_DESCRIPTION BcdEnumDescriptor; // [rsp+88h] [rbp+58h] BYREF

  BcdObjectHandle = 0LL;
  v0 = 0LL;
  ObjectCount = 0;
  LODWORD(BufferSize) = 0;
  BcdEnumDescriptor = 0LL;
  v1 = BiAcquireBcdSyncMutant(0);
  updated = v1;
  if ( v1 >= 0 )
  {
    updated = BiOpenSystemStore((__int64 *)&BcdEnumDescriptor, 0);
    BiReleaseBcdSyncMutant(0);
    v0 = (void *)BcdEnumDescriptor;
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v1);
  }
  if ( updated >= 0 )
  {
    BcdEnumDescriptor = (_BCD_OBJECT_DESCRIPTION)1LL;
    updated = BcdEnumerateObjects(v0, &BcdEnumDescriptor, 0LL, (PULONG)&BufferSize, &ObjectCount);
    if ( updated == -1073741789 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)BufferSize, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(v0, &BcdEnumDescriptor, PoolWithTag, (PULONG)&BufferSize, &ObjectCount);
        if ( updated >= 0 )
        {
          v4 = 0;
          if ( ObjectCount )
          {
            while ( 1 )
            {
              BufferSize = (const GUID *)&PoolWithTag[24 * v4];
              updated = BcdOpenObject(v0, BufferSize, &BcdObjectHandle);
              if ( updated < 0 )
                break;
              v5 = (unsigned __int16 *)qword_140CF4B98;
              v6 = 0;
              v7 = BcdObjectHandle;
              if ( *((_WORD *)qword_140CF4B98 + 18) )
              {
                do
                {
                  v8 = (_DWORD *)(qword_140CF9E88 + 12LL * v6);
                  if ( !*v8 || *v8 == *(_DWORD *)(*(_QWORD *)&BufferSize[1].Data1 + 4LL) )
                  {
                    v9 = *(_WORD *)((unsigned int)v8[2] + qword_140CF9E78);
                    if ( ((v9 & 0x20) == 0 || (dword_140C54434 & 4) != 0)
                      && ((v9 & 0x40) == 0 || (dword_140C54434 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_140CF9E88 + 12LL * v6, v7);
                      if ( updated < 0 )
                        goto LABEL_24;
                      v5 = (unsigned __int16 *)qword_140CF4B98;
                    }
                  }
                  ++v6;
                }
                while ( v6 < v5[18] );
              }
              BcdCloseObject(v7);
              v7 = 0LL;
              ++v4;
              BcdObjectHandle = 0LL;
              if ( v4 >= ObjectCount )
                goto LABEL_24;
            }
            v7 = BcdObjectHandle;
LABEL_24:
            if ( v7 )
              BcdCloseObject(v7);
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0x62536553u);
      }
      else
      {
        updated = -1073741801;
      }
    }
  }
  if ( v0 )
    BcdCloseStore(v0);
  return (unsigned int)updated;
}
