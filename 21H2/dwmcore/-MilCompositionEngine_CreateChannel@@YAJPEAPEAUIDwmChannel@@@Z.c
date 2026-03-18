/*
 * XREFs of ?MilCompositionEngine_CreateChannel@@YAJPEAPEAUIDwmChannel@@@Z @ 0x18002CD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAPEAVCChannel@@@Z @ 0x18002CD68 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilCompositionEngine_CreateChannel(struct IDwmChannel **a1)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CChannel *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_pConnection )
  {
    v5 = -2003303402;
    v6 = 22LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !a1 )
  {
    v5 = -2147024809;
    v6 = 23LL;
    goto LABEL_7;
  }
  v2 = CInternalMilCmdConnection::CreateChannel(g_pConnection, &v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    *a1 = v8;
    return 0LL;
  }
}
