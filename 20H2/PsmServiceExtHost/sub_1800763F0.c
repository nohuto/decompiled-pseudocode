/*
 * XREFs of sub_1800763F0 @ 0x1800763F0
 * Callers:
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_180075784 @ 0x180075784 (sub_180075784.c)
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 *     sub_180075DA0 @ 0x180075DA0 (sub_180075DA0.c)
 *     sub_1800760A8 @ 0x1800760A8 (sub_1800760A8.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_1800748D0 @ 0x1800748D0 (sub_1800748D0.c)
 *     sub_180074F24 @ 0x180074F24 (sub_180074F24.c)
 */

__int64 __fastcall sub_1800763F0(__int64 a1, int a2, DWORD a3, DWORD *a4)
{
  HANDLE *v4; // rsi
  __int64 v9; // rbx
  unsigned int i; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DWORD v14; // eax
  unsigned int v15; // ebx
  DWORD v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DWORD v21; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-45h] BYREF
  BOOL v23[2]; // [rsp+38h] [rbp-41h] BYREF
  __int16 v24; // [rsp+40h] [rbp-39h]
  _DWORD v25[6]; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handles[6]; // [rsp+60h] [rbp-19h] BYREF

  v4 = (HANDLE *)(a1 + 8);
  v9 = 0LL;
  if ( !sub_180074F24(*(void **)(a1 + 8)) )
    *(_DWORD *)(a1 + 92) &= ~1u;
  for ( i = 0; i < 6; ++i )
  {
    if ( _bittest(&a2, i) && (i || (*(_BYTE *)(a1 + 92) & 1) == 0) )
    {
      Handles[v9] = *v4;
      v25[v9] = i;
      v9 = (unsigned int)(v9 + 1);
    }
    ++v4;
  }
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v21 = a3;
    *(_QWORD *)v23 = v25;
    v24 = v9;
    sub_1800748D0(v11, byte_18009DE47, v12, v13, (__int64 *)v23, (__int64)&v21);
  }
  v14 = WaitForMultipleObjectsEx(v9, Handles, 0, a3, 0);
  if ( v14 >= 0x40 )
  {
    v15 = 258;
    if ( v14 != 258 )
    {
      v15 = 0;
      *a4 = v25[0];
    }
  }
  else
  {
    v15 = 0;
    v16 = v25[v14];
    *a4 = v16;
    if ( !v16 )
      *(_DWORD *)(a1 + 92) |= 1u;
  }
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v21 = *a4;
    v22 = v15;
    sub_1800624C0(v17, byte_18009E256, v18, v19, (__int64)&v22, (__int64)&v21);
  }
  return v15;
}
