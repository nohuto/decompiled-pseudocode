/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A4640
 * Callers:
 *     PiDqActionDataCreate @ 0x140624A2C (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PiDqOpenObjectRegKey @ 0x1406077B8 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14062DBA4 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqGrowPropertyArray @ 0x140771634 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1408A4A78 (PiDqPnPGetObjectPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        NTSTRSAFE_PCWSTR a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // r14d
  void *v10; // rbx
  unsigned int v11; // r15d
  int v12; // edi
  int v13; // r9d
  unsigned int *v14; // rsi
  unsigned int v15; // eax
  const void **v16; // r12
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rax
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF

  v8 = 0;
  Handle = 0LL;
  v24 = 0;
  v10 = 0LL;
  v11 = 0;
  v22 = 0LL;
  if ( a2 != 1 )
    v11 = a3;
  v12 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, &Handle);
  if ( v12 >= 0 )
  {
    v12 = PiDqPnPGetObjectPropertyKeys(a4, v11, (_DWORD)Handle, v13, (__int64)&v22, (__int64)&v24);
    if ( v12 >= 0 )
    {
      v14 = a7;
      v15 = v24;
      v16 = a6;
      v17 = *a7;
      v18 = *a7 + v24;
      if ( *a8 < v18 )
      {
        *a8 = v18;
        v12 = PiDqGrowPropertyArray(v16, v17, v18);
        if ( v12 < 0 )
          goto LABEL_13;
        v15 = v24;
      }
      if ( v15 )
      {
        v19 = *v14;
        v10 = v22;
        do
        {
          v12 = PiDqPnPGetObjectPropertyInBestLocale(
                  a4,
                  v11,
                  (__int64)Handle,
                  (__int64)v10 + 20 * v8,
                  a2,
                  a5,
                  (_OWORD *)*v16 + 3 * v19);
          if ( v12 < 0 )
            break;
          ++*v14;
          ++v8;
          v19 = *v14;
        }
        while ( v8 < v24 );
        goto LABEL_14;
      }
    }
LABEL_13:
    v10 = v22;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  return (unsigned int)v12;
}
