/*
 * XREFs of NtGdiDoPalette @ 0x1C0109000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiDoPalette(HPALETTE a1, unsigned __int16 a2, unsigned __int16 a3, char *a4, unsigned int a5)
{
  __int64 v6; // rbx
  unsigned int v7; // r15d
  BOOL v8; // r12d
  struct tagPALETTEENTRY *v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  size_t v13; // r8
  ULONG64 v14; // rcx
  __int64 v15; // [rsp+48h] [rbp-40h]
  HPALETTE v16; // [rsp+90h] [rbp+8h]
  unsigned __int16 v17; // [rsp+98h] [rbp+10h]

  v17 = a2;
  v16 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 1;
  v9 = 0LL;
  if ( a5 > 5 )
    return v7;
  v10 = 16LL * a5;
  v15 = v10;
  if ( !*(_DWORD *)((char *)&off_1C02E0DC0[1] + v10) )
  {
    if ( a4 )
    {
      if ( a3 )
      {
        v9 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
        v8 = v9 != 0LL;
        v10 = v15;
        a2 = v17;
        a1 = v16;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( v8 )
    {
      v11 = (*(__int64 (__fastcall **)(HPALETTE, unsigned int, unsigned int, struct tagPALETTEENTRY *))((char *)off_1C02E0DC0 + v10))(
              a1,
              a2,
              v6,
              v9);
      v7 = v11;
      if ( (int)v6 < v11 )
        v11 = v6;
      if ( v11 > 0 && a4 )
      {
        v13 = 4LL * v11;
        if ( (unsigned __int64)&a4[v13] > MmUserProbeAddress || &a4[v13] <= a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v9, v13);
      }
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    v9 = (struct tagPALETTEENTRY *)AllocFreeTmpBuffer(4 * (unsigned int)a3);
    if ( !v9 )
      goto LABEL_10;
    v14 = (ULONG64)&a4[4 * v6];
    if ( v14 < (unsigned __int64)a4 || v14 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9, a4, 4 * v6);
    a2 = v17;
    a1 = v16;
  }
  v7 = off_1C02E0DC0[2 * a5](a1, a2, (unsigned __int16)v6, v9);
LABEL_10:
  if ( v9 )
    FreeTmpBuffer(v9);
  return v7;
}
