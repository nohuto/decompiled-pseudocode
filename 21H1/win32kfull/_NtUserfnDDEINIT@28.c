/*
 * XREFs of _NtUserfnDDEINIT@28 @ 0x16B532
 * Callers:
 *     <none>
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     ?DDEImpDecRefInit@@YGXPAUtagWND@@PAU_TL@@@Z @ 0x15EDC5 (-DDEImpDecRefInit@@YGXPAUtagWND@@PAU_TL@@@Z.c)
 *     ?DDEImpIncRefInit@@YGHPAUtagWND@@PAUtagDDEIMP@@PAU_TL@@@Z @ 0x15EE65 (-DDEImpIncRefInit@@YGHPAUtagWND@@PAUtagDDEIMP@@PAU_TL@@@Z.c)
 */

int __stdcall NtUserfnDDEINIT(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  int v7; // ebx
  int v8; // edi
  int Prop; // esi
  int v10; // eax
  struct _SECURITY_QUALITY_OF_SERVICE *v11; // eax
  struct _KTHREAD *CurrentThread; // eax
  int v13; // edx
  int v14; // ecx
  TOKEN_TYPE v15; // eax
  void *v16; // ecx
  struct tagDDEIMP *v18; // [esp+0h] [ebp-2Ch]
  struct _TL *v19; // [esp+4h] [ebp-28h]
  _DWORD v20[3]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[3]; // [esp+18h] [ebp-14h] BYREF
  int v22; // [esp+24h] [ebp-8h]
  struct _SECURITY_QUALITY_OF_SERVICE *v23; // [esp+28h] [ebp-4h]

  v7 = 0;
  memset(v20, 0, sizeof(v20));
  v21[2] = 0;
  v8 = ValidateHwnd(a3);
  v22 = v8;
  if ( v8 )
  {
    v21[0] = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = v21;
    v21[1] = v8;
    HMLockObject(v8);
    Prop = _GetProp(v8, (unsigned __int16)atomDDEImp, 1);
    if ( !Prop )
    {
      v10 = *(_DWORD *)(v8 + 20);
      if ( *(char *)(v10 + 11) < 0 || *(char *)(v10 + 12) < 0 )
        goto LABEL_15;
      v11 = (struct _SECURITY_QUALITY_OF_SERVICE *)Win32AllocPoolWithQuota(76, 1147433813);
      v23 = v11;
      if ( !v11 )
      {
LABEL_6:
        UserSetLastError((struct _NT_TIB *)8);
LABEL_16:
        ThreadUnlock1();
        return v7;
      }
      *v11 = gqosDefault;
      CurrentThread = KeGetCurrentThread();
      Prop = (int)v23;
      if ( SeCreateClientSecurity(CurrentThread, &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)&v23[1]) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v8 = v22;
      v13 = (unsigned __int16)atomDDEImp;
      v14 = v22;
      *(_DWORD *)(Prop + 72) = 0;
      if ( !InternalSetProp(v14, v13, Prop, 1) )
      {
        v15 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 24));
        v16 = *(void **)(Prop + 24);
        if ( v15 == TokenPrimary || v16 )
          ObfDereferenceObject(v16);
        goto LABEL_8;
      }
    }
    if ( DDEImpIncRefInit(Prop, (int *)v8, (struct tagWND *)v20, v18, v19) == 1 )
    {
      v7 = ((int (__stdcall *)(int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, a4, a5);
      DDEImpDecRefInit((HWND *)v8, v20);
      goto LABEL_16;
    }
LABEL_15:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_16;
  }
  return v7;
}
