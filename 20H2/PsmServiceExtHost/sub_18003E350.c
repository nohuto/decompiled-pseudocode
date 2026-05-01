/*
 * XREFs of sub_18003E350 @ 0x18003E350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180031E60 @ 0x180031E60 (sub_180031E60.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_180067520 @ 0x180067520 (sub_180067520.c)
 *     sub_180067614 @ 0x180067614 (sub_180067614.c)
 */

__int64 __fastcall sub_18003E350(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  DWORD TickCount; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  DWORD v15; // ebx
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-B4h]
  unsigned int v21; // [rsp+38h] [rbp-B0h] BYREF
  int v22; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_18001E380();
  v6 = *(_DWORD *)(a1 + 656);
  v7 = 0x470FEAA4E1233993LL - *(_QWORD *)a3;
  if ( *(_QWORD *)a3 == 0x470FEAA4E1233993LL )
    v7 = 0x71FBB6C151A3E79DLL - *(_QWORD *)(a3 + 8);
  if ( v7 )
  {
    if ( *(_DWORD *)(a3 + 20) )
      v8 = v6 & 0xFFFFFFFD;
    else
      v8 = v6 | 2;
  }
  else
  {
    v8 = v6 | 1;
    if ( !*(_DWORD *)(a3 + 20) )
      v8 = *(_DWORD *)(a1 + 656) & 0xFFFFFFFE;
  }
  v19 = *(_DWORD *)(a1 + 656);
  v20 = v8;
  sub_180031E60(a1 + 312, v5, (void (__fastcall *)(_QWORD, __int64))sub_18003C3C0, (__int64)&v19);
  TickCount = GetTickCount();
  sub_18003E4CC(a1, (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  v10 = *(unsigned int *)(a1 + 524);
  v11 = *(_QWORD *)(a1 + 2720);
  if ( (_DWORD)v10 )
  {
    v17 = (v20 >> 1) & 1;
    if ( ((v19 >> 1) & 1) != v17 )
    {
      if ( v17 )
      {
        sub_180067520(v11, *(unsigned int *)(a1 + 524));
      }
      else
      {
        v18 = *(_QWORD *)(v11 + 32);
        *(_QWORD *)(v11 + 48) -= v10;
        if ( (*(_BYTE *)(v18 + 1272) & 4) == 0 )
          sub_180067614(v11, v10);
      }
    }
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v22 = *(_DWORD *)(a1 + 656);
    v21 = v8;
    sub_1800624C0(v12, (unsigned int)&unk_18009CCEF, v13, v14, (__int64)&v22, (__int64)&v21);
  }
  *(_DWORD *)(a1 + 656) = v8;
  sub_18000F390();
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return 0LL;
}
