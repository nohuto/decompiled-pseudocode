/*
 * XREFs of MiLogAllocateWsleEvent @ 0x14052B068
 * Callers:
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1402062C0 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiFillPageExtraInfo @ 0x14052B018 (MiFillPageExtraInfo.c)
 */

__int64 __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  __int16 v6; // ax
  int v7; // ecx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0LL;
  v10 = 0LL;
  MiIdentifyPfnWrapper(a1, (__int64)&v9);
  if ( MI_PFN_IS_PROTO(a1) )
  {
    MiFillPageExtraInfo((unsigned __int64 *)&v10 + 1, a2, a3);
    v6 = 642;
    v7 = 32;
  }
  else
  {
    v6 = 630;
    v7 = 24;
  }
  v13 = 0;
  v11 = &v9;
  v12 = v7;
  return EtwTraceKernelEvent((int)&v11, 1, 0x28000001u, v6, 289413890);
}
