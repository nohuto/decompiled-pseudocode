/*
 * XREFs of ?xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z @ 0xC38A2
 * Callers:
 *     _xxxSetIMEShowStatus@12 @ 0xCC776 (_xxxSetIMEShowStatus@12.c)
 *     _xxxBroadcastImeShowStatusChange@8 @ 0x14F378 (_xxxBroadcastImeShowStatusChange@8.c)
 * Callees:
 *     _unsafe_cast_fnid_or_class_to_PIMEWND@4 @ 0x1DB34 (_unsafe_cast_fnid_or_class_to_PIMEWND@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z @ 0x92932 (-xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YGXPAUtagTHREADINFO@@PAUtagIMEUI@@PAUtagWND@@H@Z @ 0xC399E (-xxxSendOpenStatusNotify@@YGXPAUtagTHREADINFO@@PAUtagIMEUI@@PAUtagWND@@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall xxxNotifyImeShowStatus(_DWORD *this)
{
  int v2; // ebx
  ULONG *v3; // edi
  int v4; // eax
  ULONG v5; // edi
  ULONG v6; // eax
  BOOL v7; // eax
  struct tagWND *v8; // [esp+0h] [ebp-50h]
  int v9; // [esp+4h] [ebp-4Ch]
  struct tagTHREADINFO *v10; // [esp+2Ch] [ebp-24h]
  int v11; // [esp+30h] [ebp-20h]
  BOOL v12; // [esp+34h] [ebp-1Ch]

  v2 = 0;
  if ( (*_gpsi & 4) != 0 && *(char *)(this[5] + 12) >= 0 )
  {
    v3 = (ULONG *)unsafe_cast_fnid_or_class_to_PIMEWND(this);
    if ( v3 )
    {
      v4 = this[2];
      v11 = v4;
      if ( v4 != _gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v4 + 232));
      v5 = *v3;
      v6 = _MmUserProbeAddress;
      if ( v5 < _MmUserProbeAddress )
        v6 = v5;
      v7 = (*(_BYTE *)(v6 + 24) & 0x20) != 0 && gfIMEShowStatus;
      v12 = v7;
      v10 = (struct tagTHREADINFO *)HMValidateHandleNoSecure(*(_DWORD *)(v5 + 8), 1);
      if ( v10 || (v10 = *(struct tagTHREADINFO **)(*(_DWORD *)(this[2] + 236) + 60)) != 0 )
      {
        v2 = 1;
        *(_DWORD *)(v5 + 24) ^= (v12 ^ *(_DWORD *)(v5 + 24)) & 1;
      }
      if ( v11 != _gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify(v10, (struct tagIMEUI *)v12, v8, v9);
      if ( *(char *)(this[5] + 12) >= 0 )
        xxxCheckImeShowStatus(this, 0);
    }
  }
}
