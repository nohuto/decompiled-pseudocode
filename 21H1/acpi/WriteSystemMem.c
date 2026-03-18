/*
 * XREFs of WriteSystemMem @ 0x1C00247D4
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C0024734 (WriteBuffField.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

void __fastcall WriteSystemMem(unsigned __int64 Src, size_t Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v8; // esi
  __int64 v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  int (__fastcall *v13)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v14; // rax
  int *v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 Srca; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v19[10]; // [rsp+40h] [rbp-39h] BYREF

  v18 = 0;
  v19[8] = -1LL;
  v5 = 0LL;
  v19[0] = 0LL;
  v19[3] = 0LL;
  memset(&v19[5], 0, 24);
  v8 = Size;
  Srca = 0LL;
  v19[1] = 255LL;
  v19[2] = 0xFFFFLL;
  v19[4] = 0xFFFFFFFFLL;
  if ( (unsigned int)Size > 8 )
    return;
  v9 = v19[(unsigned int)Size];
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v13 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
    if ( v13 )
    {
      if ( a4 != v9 )
      {
        if ( v13(0LL, Src, &Srca, (unsigned int)Size, &v18) < 0 )
        {
LABEL_26:
          v5 = Srca;
          goto LABEL_3;
        }
        v5 = Srca;
      }
      v14 = a3 | v5 & ~a4;
      v15 = &v18;
      Srca = v14;
      LOBYTE(v15) = 1;
      if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
             v15,
             Src,
             &Srca,
             v8,
             &v18) >= 0 )
        return;
      goto LABEL_26;
    }
  }
LABEL_3:
  if ( Src % v8 )
  {
    if ( a4 != v9 )
    {
      memmove(&Srca, (const void *)Src, v8);
      v5 = Srca;
    }
    Srca = a3 | v5 & ~a4;
    memmove((void *)Src, &Srca, v8);
  }
  else
  {
    v10 = v8 - 1;
    if ( !v10 )
    {
      if ( a4 != v9 )
        v5 = *(unsigned __int8 *)Src;
      Srca = a3 | v5 & ~a4;
      *(_BYTE *)Src = Srca;
LABEL_8:
      _InterlockedOr(v16, 0);
      return;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( a4 != v9 )
        v5 = *(unsigned __int16 *)Src;
      Srca = a3 | v5 & ~a4;
      *(_WORD *)Src = Srca;
      goto LABEL_8;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
      if ( a4 != v9 )
        v5 = *(unsigned int *)Src;
      Srca = a3 | v5 & ~a4;
      *(_DWORD *)Src = Srca;
      goto LABEL_8;
    }
    if ( v12 == 4 )
    {
      if ( a4 != v9 )
        v5 = *(_QWORD *)Src;
      Srca = a3 | v5 & ~a4;
      *(_QWORD *)Src = Srca;
      KeFlushWriteBuffer();
    }
  }
}
