/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x140776EE8
 * Callers:
 *     PiDqActionDataCreate @ 0x140778100 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiDqOpenObjectRegKey @ 0x14069984C (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140778B24 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x14077D784 (PiDqPnPGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 *a8,
        _DWORD *a9)
{
  int v9; // ebx
  int v10; // r15d
  __int64 Pool2; // rax
  unsigned int v12; // ebp
  __int64 v13; // rax
  _DWORD *v14; // r14
  int v15; // r8d
  __int64 v16; // rdi
  int v17; // r9d
  int v18; // eax
  __int128 v20; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  Pool2 = ExAllocatePool2(256LL, 48LL * a7, 1483763280LL);
  *a8 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_11;
  }
  PiPnpRtlBeginOperation(P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_11;
  v13 = (unsigned int)*a9;
  v14 = (_DWORD *)(a6 + 20);
  while ( 1 )
  {
    v15 = 0;
    v16 = *a8 + 48 * v13;
    if ( !*v14 )
      goto LABEL_5;
    if ( *v14 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, &Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v16 = *(_OWORD *)(v14 - 5);
      v20 = *(_OWORD *)(v14 - 1);
      *(_DWORD *)(v16 + 32) = 0;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_DWORD *)(v16 + 36) = 0;
      *(_OWORD *)(v16 + 16) = v20;
      goto LABEL_9;
    }
    v15 = (int)Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_11;
    v17 = a6 + 32 * v12;
    v18 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, v15, v17, *v14, a5, v16)
        : PiDqPnPGetObjectProperty(a3, v10, v15, v17, *v14, *(NTSTRSAFE_PCWSTR *)(v14 + 1), v16);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_11;
LABEL_9:
    ++*a9;
    ++v12;
    v13 = (unsigned int)*a9;
    v14 += 8;
    if ( v12 >= a7 )
      goto LABEL_11;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_11:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return (unsigned int)v9;
}
