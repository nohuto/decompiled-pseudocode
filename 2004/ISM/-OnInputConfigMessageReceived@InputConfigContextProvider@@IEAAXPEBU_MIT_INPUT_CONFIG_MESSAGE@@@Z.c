/*
 * XREFs of ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035ABC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const___::_Do_call @ 0x18003A820 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_18003A820.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x180035C04 (--$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180035D2C (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E90 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?CopyConfig@InputConfigContextProvider@@IEAAJAEBUINPUT_SPACE_PAYLOAD@@PEAU2@@Z @ 0x180035EC0 (-CopyConfig@InputConfigContextProvider@@IEAAJAEBUINPUT_SPACE_PAYLOAD@@PEAU2@@Z.c)
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180035F44 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x180035F98 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputConfigContextProvider::OnInputConfigMessageReceived(
        InputConfigContextProvider *this,
        const struct _MIT_INPUT_CONFIG_MESSAGE *a2)
{
  InputConfigContextProvider *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-49h] BYREF
  char *v7; // [rsp+30h] [rbp-39h]
  _OWORD v8[4]; // [rsp+40h] [rbp-29h] BYREF
  char v9; // [rsp+80h] [rbp+17h]
  __int128 v10; // [rsp+90h] [rbp+27h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+37h]

  v3 = (InputConfigContextProvider *)*(unsigned int *)a2;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      InputConfigContextProvider::ClearConfigs(v3, (char *)this + 256);
      if ( (char *)this + 256 != (char *)this + 232 )
        std::vector<INPUT_SPACE_PAYLOAD>::_Assign_range<INPUT_SPACE_PAYLOAD *>(
          (char *)this + 256,
          *((_QWORD *)this + 29),
          *((_QWORD *)this + 30));
      *((_QWORD *)this + 30) = *((_QWORD *)this + 29);
      v4 = *((_QWORD *)this + 32);
      *(_QWORD *)&v6 = (unsigned int)((*((_QWORD *)this + 33) - v4) / 24);
      if ( v4 == *((_QWORD *)this + 33) )
        v4 = 0LL;
      *((_QWORD *)&v6 + 1) = v4;
      v8[0] = v6;
      v9 = 1;
      SystemContextProvider::BroadcastMessageToObservers(this, v8);
      std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(v8);
    }
  }
  else
  {
    v6 = *(_OWORD *)((char *)a2 + 4);
    v7 = (char *)a2 + 20;
    if ( (int)InputConfigContextProvider::CopyConfig(
                v3,
                (const struct INPUT_SPACE_PAYLOAD *)&v6,
                (struct INPUT_SPACE_PAYLOAD *)&v10) >= 0 )
    {
      v5 = *((_QWORD *)this + 30);
      if ( *((_QWORD *)this + 31) == v5 )
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD const &>((char *)this + 232, v5, &v10);
      }
      else
      {
        *(_OWORD *)v5 = v10;
        *(_QWORD *)(v5 + 16) = v11;
        *((_QWORD *)this + 30) += 24LL;
      }
    }
  }
}
