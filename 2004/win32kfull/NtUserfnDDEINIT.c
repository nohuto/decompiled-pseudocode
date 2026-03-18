/*
 * XREFs of NtUserfnDDEINIT @ 0x1C02055D0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F6980 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F6A50 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbx
  __int64 v11; // rax
  unsigned __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 Prop; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  TOKEN_TYPE v20; // eax
  void *v21; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v27[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v28; // [rsp+48h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-20h]

  v28 = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  v27[2] = 0LL;
  v11 = ValidateHwnd(a3);
  v12 = (unsigned __int64 *)v11;
  if ( v11 )
  {
    v27[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v27;
    v27[1] = v11;
    HMLockObject(v11);
    Prop = GetProp((__int64)v12, (unsigned __int16)atomDDEImp, 1LL);
    if ( !Prop )
    {
      v16 = v12[5];
      if ( *(char *)(v16 + 19) < 0 || *(char *)(v16 + 20) < 0 )
      {
LABEL_15:
        v18 = 87LL;
        goto LABEL_16;
      }
      v17 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v17;
      if ( !v17 )
      {
LABEL_6:
        v18 = 8LL;
LABEL_16:
        UserSetLastError(v18, v13, v15);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v17 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v17 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v19 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp((__int64)v12, v19, Prop, 1u) )
      {
        v20 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v21 = *(void **)(Prop + 32);
        if ( v20 == TokenPrimary || v21 )
          ObfDereferenceObject(v21);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v12, (struct tagDDEIMP *)Prop, (struct _TL *)&v28) == 1 )
    {
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             a4,
             a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v28;
      DDEImpDecRefInitWorker(*v12);
LABEL_17:
      ThreadUnlock1(v24, v23, v25);
      return v7;
    }
    goto LABEL_15;
  }
  return v7;
}
