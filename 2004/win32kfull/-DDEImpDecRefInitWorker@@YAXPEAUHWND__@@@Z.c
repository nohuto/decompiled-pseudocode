/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F6980
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C02055D0 (NtUserfnDDEINIT.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 Prop; // rax
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  TOKEN_TYPE v8; // eax
  void *v9; // rcx

  v1 = HMValidateHandleNoSecure(a1, 1);
  v2 = v1;
  if ( v1 )
  {
    Prop = GetProp(v1, (unsigned __int16)atomDDEImp, 1LL);
    v4 = Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        v6 = (unsigned __int16)atomDDEImp;
        v7 = *(_QWORD *)(v2 + 144);
        if ( atomDDEImp == word_1C033AF24 )
          *(_QWORD *)(*(_QWORD *)(v2 + 40) + 312LL) = 0LL;
        RealInternalRemoveProp(v7, v6, 1LL);
        if ( !*(_WORD *)(v4 + 90) )
        {
          v8 = SeTokenType(*(PACCESS_TOKEN *)(v4 + 32));
          v9 = *(void **)(v4 + 32);
          if ( v8 == TokenPrimary || v9 )
            ObfDereferenceObject(v9);
          Win32FreePool(v4);
        }
      }
    }
  }
}
