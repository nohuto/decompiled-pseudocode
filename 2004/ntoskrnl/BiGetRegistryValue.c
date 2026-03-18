/*
 * XREFs of BiGetRegistryValue @ 0x140771A18
 * Callers:
 *     BiWasFirmwareModified @ 0x140398740 (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x14076638C (BiUnloadHiveByHandle.c)
 *     BiMarkTreatAsSystemStore @ 0x14076FB40 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x14076FBF8 (BiGetObjectDescription.c)
 *     BiIsWinPEBoot @ 0x1407709E4 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x140770FC8 (BiIsSystemStore.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096C3C0 (BiIsPortableWorkspaceBoot.c)
 *     BiGetSavedBootEntry @ 0x14096EFE4 (BiGetSavedBootEntry.c)
 *     BiUpdateBcdObject @ 0x14096F9A8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x140356790 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x14036044C (BiSanitizeHandle.c)
 *     BiZwQueryValueKey @ 0x1403987C8 (BiZwQueryValueKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  const WCHAR *v7; // rax
  unsigned int i; // r12d
  _DWORD *PoolWithTag; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  NTSTATUS v13; // ebx
  void *v14; // rsi
  __int64 v15; // r8
  PVOID v16; // rax
  ULONG NumberOfBytes; // [rsp+30h] [rbp-68h] BYREF
  NTSTATUS NumberOfBytes_4; // [rsp+34h] [rbp-64h]
  ULONG v20; // [rsp+38h] [rbp-60h] BYREF
  int v21[2]; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v7 = a2;
  v20 = 0;
  NumberOfBytes = 0;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    *(_QWORD *)v21 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v7);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    if ( a3 )
    {
      v13 = BiOpenKey(v11, a3, 131097LL, v21);
      NumberOfBytes_4 = v13;
      v14 = *(void **)v21;
      if ( v13 < 0 )
        goto LABEL_11;
    }
    else
    {
      v14 = (void *)v11;
    }
    v13 = BiZwQueryValueKey(v14, &DestinationString, v12, 0LL, 0, &NumberOfBytes);
    NumberOfBytes_4 = v13;
    if ( v13 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_19;
      v13 = BiZwQueryValueKey(v14, &DestinationString, v15, PoolWithTag, NumberOfBytes, &v20);
      NumberOfBytes_4 = v13;
      if ( v13 >= 0 )
      {
        if ( PoolWithTag[1] == a4 )
        {
          NumberOfBytes -= 12;
          v16 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
          *a5 = v16;
          if ( v16 )
          {
            memmove(v16, PoolWithTag + 3, NumberOfBytes);
            *a6 = NumberOfBytes;
            v13 = 0;
          }
          else
          {
LABEL_19:
            v13 = -1073741670;
          }
        }
        else
        {
          v13 = -1073741788;
        }
        NumberOfBytes_4 = v13;
      }
    }
LABEL_11:
    if ( v14 != (void *)a1 && v14 )
      CmSiCloseSection(v14);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v13 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v7 = a2;
  }
  return (unsigned int)v13;
}
