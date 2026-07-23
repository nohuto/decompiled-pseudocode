/*
 * XREFs of SepSecureBootCorrectBcd @ 0x14091F948
 * Callers:
 *     NtFilterBootOption @ 0x14091F500 (NtFilterBootOption.c)
 * Callees:
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BiReleaseBcdSyncMutant @ 0x14076FF84 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140770148 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14091FDB4 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x14096A484 (BcdEnumerateObjects.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
              v5 = (unsigned __int16 *)qword_140CF4CD8;
              v6 = 0;
              v7 = BcdObjectHandle;
              if ( *((_WORD *)qword_140CF4CD8 + 18) )
              {
                do
                {
                  v8 = (_DWORD *)(qword_140CF9F90 + 12LL * v6);
                  if ( !*v8 || *v8 == *(_DWORD *)(*(_QWORD *)&BufferSize[1].Data1 + 4LL) )
                  {
                    v9 = *(_WORD *)((unsigned int)v8[2] + qword_140CF9F80);
                    if ( ((v9 & 0x20) == 0 || (dword_140C5453C & 4) != 0)
                      && ((v9 & 0x40) == 0 || (dword_140C5453C & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_140CF9F90 + 12LL * v6, v7);
                      if ( updated < 0 )
                        goto LABEL_24;
                      v5 = (unsigned __int16 *)qword_140CF4CD8;
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
