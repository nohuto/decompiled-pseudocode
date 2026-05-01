/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x180059B90
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x18009D840 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x18005C0EC (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x18005C1CC (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
        volatile signed __int64 **a1,
        const unsigned __int16 *a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v5 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize((ViewEventArgsForPropertyChanged *)v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v7 = *((_QWORD *)v6 + 11);
        while ( v7 >= 0 )
        {
          if ( (_DWORD)v7 != 0x7FFFFFFF )
          {
            v8 = v7;
            v7 = _InterlockedCompareExchange64(v6 + 11, v7 + 1, v7);
            if ( v8 != v7 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v7 + 16));
      }
LABEL_11:
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
