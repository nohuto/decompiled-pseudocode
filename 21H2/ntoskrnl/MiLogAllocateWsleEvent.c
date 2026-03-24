/*
 * XREFs of MiLogAllocateWsleEvent @ 0x140530538
 * Callers:
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfnWrapper @ 0x140349190 (MiIdentifyPfnWrapper.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiFillPageExtraInfo @ 0x1405304E8 (MiFillPageExtraInfo.c)
 */

__int64 __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  __int16 v7; // ax
  int v8; // ecx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  v10 = 0LL;
  v11 = 0LL;
  MiIdentifyPfnWrapper(a1, (__int64)&v10, a3, a4);
  if ( MI_PFN_IS_PROTO(a1) )
  {
    MiFillPageExtraInfo((unsigned __int64 *)&v11 + 1, a2, a3);
    v7 = 642;
    v8 = 32;
  }
  else
  {
    v7 = 630;
    v8 = 24;
  }
  v14 = 0;
  v12 = &v10;
  v13 = v8;
  return EtwTraceKernelEvent((int)&v12, 1, 0x28000001u, v7, 289413890);
}
