/*
 * XREFs of ndisBlowStringListIntoAtoms @ 0x1C0124600
 * Callers:
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C0125070 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C0125258 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C01253E0 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00AC348 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C012256C (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AA0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0125670 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ndisBlowStringListIntoAtoms(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int StringArray; // edi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  char *Atom; // rax
  void **v11; // rcx
  int v13; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-Ch]
  PVOID P; // [rsp+28h] [rbp-8h]

  v13 = 0;
  v14 = 0;
  P = 0LL;
  StringArray = NetSetupPropertyBag::ReadStringArray(a1, a2, (__int64)&v13);
  if ( !StringArray )
  {
    v5 = v14;
    if ( (unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(a3, v14) )
    {
      v6 = *(unsigned int *)(a3 + 4);
      if ( v5 > v6 )
        memset((void *)(*(_QWORD *)(a3 + 8) + 8 * v6), 0, 8 * ((unsigned int)v5 - v6));
      *(_DWORD *)(a3 + 4) = v5;
      v7 = 0LL;
      v8 = v14;
      v9 = v14;
      if ( !v14 )
      {
LABEL_11:
        StringArray = 0;
        goto LABEL_15;
      }
      while ( 1 )
      {
        if ( v7 >= v9
          || (Atom = Rtl::KStringAtomTableBase<1>::GetAtom(
                       (__int64)qword_1C00E4598,
                       *(_WORD **)(*((_QWORD *)P + v7) + 8LL)),
              v7 >= *(unsigned int *)(a3 + 4))
          || (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7) = Atom, v7 >= *(unsigned int *)(a3 + 4)) )
        {
          __fastfail(5u);
        }
        if ( !*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v7) )
          break;
        v8 = v14;
        ++v7;
        v9 = v14;
        if ( v7 >= v14 )
          goto LABEL_11;
      }
    }
    StringArray = -1073741670;
  }
  v8 = v14;
LABEL_15:
  v11 = (void **)P;
  if ( P )
  {
    while ( v8 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v11[--v8]);
      v11 = (void **)P;
    }
    ExFreePoolWithTag(v11, 0x7272414Bu);
  }
  return StringArray;
}
