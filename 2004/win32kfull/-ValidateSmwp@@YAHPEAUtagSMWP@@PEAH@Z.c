/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C006DBA8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006DC54 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  int *v3; // rsi
  __int64 v4; // rax
  struct tagCVR *v5; // rbx
  int v6; // edi
  __int64 v7; // rbp

  *a2 = 1;
  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(**((_QWORD **)a1 + 5), a2);
  if ( !v4 )
    return 0LL;
  v5 = (struct tagCVR *)*((_QWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 7);
  v7 = *(_QWORD *)(v4 + 104);
  while ( 1 )
  {
    if ( --v6 < 0 )
      return 1LL;
    if ( !(unsigned int)ValidateWindowPos(v5, 0LL) )
    {
      *(_QWORD *)v5 = 0LL;
      goto LABEL_8;
    }
    if ( *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)v5) + 104) != v7 )
      break;
    if ( (*((_DWORD *)v5 + 8) & 0x2000) != 0 )
      *v3 = 0;
LABEL_8:
    v5 = (struct tagCVR *)((char *)v5 + 168);
  }
  UserSetLastError(1441LL);
  return 0LL;
}
