/*
 * XREFs of NtUserfnOUTLBOXSTRING @ 0x1C0151840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTLBOXSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  ULONG v18; // r8d
  SIZE_T v19; // rdx
  int v20; // eax
  __int128 v22; // [rsp+38h] [rbp-40h] BYREF

  v22 = 0LL;
  if ( (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL )
    return -1LL;
  v10 = (a6 + 6) & 0x1F;
  v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))mpFnidPfn[v10])(a1, 394LL, a3, a7, a5);
  v12 = -1LL;
  if ( v11 != -1 )
  {
    v13 = v11 + 1;
    v14 = a7 << 31;
    v15 = v11 + 1;
    if ( !a7 )
      v15 = 2 * v13;
    v16 = v14 | v15 & 0x7FFFFFFFu;
    DWORD1(v22) = v16;
    v17 = v14 | v15 & 0x7FFFFFFF;
    if ( ((unsigned int)v16 & 0x7FFFFFFF) < (unsigned int)v13 )
    {
      UserSetLastError(0LL, v13, v16);
      return v12;
    }
    LODWORD(v22) = 0;
    *((_QWORD *)&v22 + 1) = a4;
    if ( (v16 & 0x7FFFFFFF) != 0 )
    {
      v18 = ((int)v16 >> 31) + 2;
      v19 = v17 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
        goto LABEL_12;
      v19 = ((unsigned __int64)(unsigned int)~(_DWORD)v16 >> 31) + 1;
      v18 = ((int)v16 >> 31) + 2;
    }
    ProbeForWrite(a4, v19, v18);
LABEL_12:
    v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[v10])(a1, a2, a3, &v22, a5);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    if ( (v20 & 0x40) == 0 && (v20 & 0x30) != 0 )
      return a7 != 0 ? 8LL : 4LL;
  }
  return v12;
}
