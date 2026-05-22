/*
 * XREFs of ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18017C210
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x1800373FC (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18003741C (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

void __fastcall GameInputProcessor::OnDeviceRemoval(char **this, struct DeviceInfo *a2)
{
  int v4; // eax
  char *v5; // rcx
  char *v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize((GameInputProcessor *)this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      464LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gamei"
               "nputprocessor.cpp",
      (const char *)(unsigned int)v4);
  if ( GameInputProcessor::IsLegacyPnpDevice(a2) && ((*((_DWORD *)a2 + 1) - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = this[21];
    v6 = this[22];
    while ( v5 != v6 )
    {
      if ( *(_DWORD *)v5 == *(_DWORD *)a2 )
      {
        memmove_0(v5, v5 + 4, v6 - (v5 + 4));
        this[22] -= 4;
        return;
      }
      v5 += 4;
    }
  }
}
