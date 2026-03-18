/*
 * XREFs of MiLogAllocateWsleEvent @ 0x14052EA38
 * Callers:
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14021F240 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiFillPageExtraInfo @ 0x14052E9E8 (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  unsigned __int16 v6; // ax
  int v7; // ecx
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v8 = 0LL;
  v9 = 0LL;
  MiIdentifyPfnWrapper(a1, (__int64)&v8);
  if ( MI_PFN_IS_PROTO(a1) )
  {
    MiFillPageExtraInfo((unsigned __int64 *)&v9 + 1, a2, a3);
    v6 = 642;
    v7 = 32;
  }
  else
  {
    v6 = 630;
    v7 = 24;
  }
  v12 = 0;
  v10 = &v8;
  v11 = v7;
  EtwTraceKernelEvent((__int64)&v10, 1u, 0x28000001u, v6, 0x11401B02u);
}
