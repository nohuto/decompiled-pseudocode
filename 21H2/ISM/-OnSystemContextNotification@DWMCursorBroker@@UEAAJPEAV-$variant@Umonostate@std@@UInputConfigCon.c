/*
 * XREFs of ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180036FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x18002261C (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800370A4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

__int64 __fastcall DWMCursorBroker::OnSystemContextNotification(_QWORD *a1, __int64 a2)
{
  void **v3; // rdi
  __int64 v4; // r14
  char *v5; // rsi
  char *v6; // rcx
  unsigned __int64 v7; // r8
  __int64 ***v8; // rsi
  __int64 **i; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // eax
  int v14; // edi
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 || *(_BYTE *)(a2 + 64) != 1 )
    a2 = 0LL;
  if ( a2 )
  {
    v3 = (void **)(a1 + 58);
    if ( *(_DWORD *)a2 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      v5 = (char *)a1[59];
      v6 = &v5[-a1[58]];
      v7 = *(unsigned int *)(v4 + 12);
      if ( v7 < (__int64)v6 / 200 )
      {
        v3[1] = (char *)*v3 + 200 * v7;
      }
      else if ( v7 > (__int64)v6 / 200 )
      {
        if ( v7 <= ((_BYTE *)v3[2] - (_BYTE *)*v3) / 200 )
        {
          v11 = v7 - (__int64)v6 / 200;
          if ( v11 )
          {
            v12 = 200 * v11;
            memset_0(v3[1], 0, 200 * v11);
            v5 += v12;
          }
          v3[1] = v5;
        }
        else
        {
          std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(v3, (unsigned int)v7);
        }
      }
      memmove_0(*v3, *(const void **)(v4 + 16), 200LL * *(unsigned int *)(v4 + 12));
    }
    else
    {
      a1[59] = a1[58];
    }
    v8 = (__int64 ***)a1[5];
    for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
    {
      v13 = DWMCursor::CheckAndUpdateDpiScale((POINT *)i[3], 1);
      v14 = v13;
      if ( v13 >= 0 )
        v14 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v13);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v14,
          v15);
    }
  }
  return 0LL;
}
