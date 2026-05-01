/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019A10
 * Callers:
 *     ?AddRef@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x180019B80 (-AddRef@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEq_ea_180019B80.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18001B060 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIt_ea_18001B060.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<HSTRING__ *>>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0x7FFFFFFF;
  if ( v1 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v1 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v4 = v1 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1 + 1, v1);
      v5 = v1 == v6;
      v1 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
