/*
 * XREFs of _NtUserLayoutCompleted@4 @ 0xA8C00
 * Callers:
 *     <none>
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _GreWindowLayoutComplete@16 @ 0xA8D24 (_GreWindowLayoutComplete@16.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _McTemplateK0qqzz_EtwWriteTransfer@28 @ 0x156523 (_McTemplateK0qqzz_EtwWriteTransfer@28.c)
 *     _HandleAsyncResizeComplete@4 @ 0x17649B (_HandleAsyncResizeComplete@4.c)
 *     _DwmAsyncCancelRotationDelay@4 @ 0x1D1A90 (_DwmAsyncCancelRotationDelay@4.c)
 */

int __stdcall NtUserLayoutCompleted(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // esi
  int v4; // edi
  _DWORD *TopLevelWindow; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  PACCESS_TOKEN v9; // eax
  int v10; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-1B4h] BYREF
  int v12; // [esp+14h] [ebp-1ACh]
  int v13; // [esp+18h] [ebp-1A8h]
  int v14; // [esp+1Ch] [ebp-1A4h] BYREF
  int v15; // [esp+20h] [ebp-1A0h]
  int v16; // [esp+24h] [ebp-19Ch]
  int v17; // [esp+28h] [ebp-198h] BYREF
  int v18; // [esp+2Ch] [ebp-194h] BYREF
  PVOID Object; // [esp+30h] [ebp-190h]
  int v20; // [esp+34h] [ebp-18Ch] BYREF
  _BYTE v21[256]; // [esp+38h] [ebp-188h] BYREF
  _BYTE v22[132]; // [esp+138h] [ebp-88h] BYREF

  v20 = a1;
  v14 = 0;
  v1 = 0;
  v15 = 0;
  v16 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    Object = (PVOID)_gptiCurrent;
    v14 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v14;
    v15 = v2;
    HMLockObject(v2);
    if ( (byte_275604 & 2) == 0 )
      goto LABEL_3;
    memset(v21, 0, sizeof(v21));
    memset(v22, 0, sizeof(v22));
    v17 = 256;
    v18 = 132;
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    v9 = PsReferencePrimaryToken(**((PEPROCESS **)Object + 58));
    Object = v9;
    if ( v9 )
    {
      RtlQueryPackageIdentity(v9, v21, &v17, v22, &v18, 0);
      _GetClientRect(v3, v11);
      v4 = v20;
      if ( (byte_275604 & 2) != 0 )
        McTemplateK0qqzz_EtwWriteTransfer((unsigned __int16)v12 | ((unsigned __int16)v13 << 16), v20, v12, v22, v21);
      ObfDereferenceObject(Object);
    }
    else
    {
LABEL_3:
      v4 = v20;
    }
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 12) + 188) == v3 )
    {
      v10 = ReferenceDwmApiPort();
      DwmAsyncCancelRotationDelay(v10);
    }
    PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 38, v4);
    if ( *(char *)(*(_DWORD *)(v3 + 20) + 17) < 0 )
    {
      TopLevelWindow = (_DWORD *)_GetTopLevelWindow(v3);
      v6 = TopLevelWindow;
      if ( TopLevelWindow )
      {
        v7 = *(_WORD *)(TopLevelWindow[5] + 30) & 0x3FFF;
        if ( v7 != 669 )
        {
          v20 = 0;
          GreWindowLayoutComplete(*TopLevelWindow, v7, &v20);
          if ( v20 )
            HandleAsyncResizeComplete(v6);
        }
      }
    }
    v1 = 1;
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
