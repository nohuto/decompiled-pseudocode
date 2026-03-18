/*
 * XREFs of ?DDEImpDecRefInitWorker@@YGXPAUHWND__@@@Z @ 0x15EDF2
 * Callers:
 *     ?DDEImpDecRefInit@@YGXPAUtagWND@@PAU_TL@@@Z @ 0x15EDC5 (-DDEImpDecRefInit@@YGXPAUtagWND@@PAU_TL@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

void __stdcall DDEImpDecRefInitWorker(HWND a1)
{
  int v1; // eax
  int v2; // edi
  int Prop; // eax
  int v4; // esi
  TOKEN_TYPE v6; // eax
  void *v7; // ecx

  v1 = HMValidateHandleNoSecure((unsigned int)a1, 1);
  v2 = v1;
  if ( v1 )
  {
    Prop = _GetProp(v1, (unsigned __int16)atomDDEImp, 1);
    v4 = Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 72))-- == 1 )
      {
        InternalRemoveProp(v2, atomDDEImp, 1);
        if ( !*(_WORD *)(v4 + 74) )
        {
          v6 = SeTokenType(*(PACCESS_TOKEN *)(v4 + 24));
          v7 = *(void **)(v4 + 24);
          if ( v6 == TokenPrimary || v7 )
            ObfDereferenceObject(v7);
          Win32FreePool(v4);
        }
      }
    }
  }
}
