/*
 * XREFs of ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x1801296EC
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x180129DBC (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D384 (--_U@YAPEAX_K@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088F40 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::FindCollectionForProperty(__int64 a1, int a2, _DWORD *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  unsigned __int64 v8; // rdx
  __int16 v9; // bx
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  struct _HIDP_LINK_COLLECTION_NODE *v13; // rax
  NTSTATUS LinkCollectionNodes; // eax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ULONG LinkCollectionNodesLength; // [rsp+48h] [rbp+10h] BYREF
  void *v19; // [rsp+50h] [rbp+18h]

  LinkCollectionNodesLength = 0;
  v19 = 0LL;
  *a3 = 0;
  v5 = a2 - 6;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 != 1 )
            goto LABEL_26;
          v9 = 40;
        }
        else
        {
          v9 = 39;
        }
      }
      else
      {
        v9 = 38;
      }
    }
    else
    {
      v9 = 37;
    }
  }
  else
  {
    v9 = 36;
  }
  v10 = *(unsigned __int16 *)(a1 + 44);
  LinkCollectionNodesLength = v10;
  if ( !(_DWORD)v10 )
  {
    v11 = -2089418750;
    v12 = 91LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
      (const char *)v11);
    goto LABEL_27;
  }
  v13 = (struct _HIDP_LINK_COLLECTION_NODE *)operator new[](saturated_mul(v10, 0x18uLL));
  v19 = v13;
  if ( !v13 )
  {
    v11 = -2147024882;
    v12 = 95LL;
    goto LABEL_25;
  }
  LinkCollectionNodes = HidP_GetLinkCollectionNodes(v13, &LinkCollectionNodesLength, *(PHIDP_PREPARSED_DATA *)(a1 + 64));
  if ( LinkCollectionNodes < 0 )
  {
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x64,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
            (const char *)(unsigned int)LinkCollectionNodes);
    goto LABEL_27;
  }
  v15 = 0LL;
  v8 = LinkCollectionNodesLength;
  if ( LinkCollectionNodesLength )
  {
    while ( *((_WORD *)v19 + 12 * v15 + 1) != 18 || *((_WORD *)v19 + 12 * v15) != v9 )
    {
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= LinkCollectionNodesLength )
        goto LABEL_23;
    }
    *a3 = v15;
  }
LABEL_23:
  if ( (_DWORD)v15 == (_DWORD)v8 )
  {
    v11 = -2147467259;
    v12 = 113LL;
    goto LABEL_25;
  }
LABEL_26:
  v11 = 0;
LABEL_27:
  if ( v19 )
    operator delete(v19, (const struct std::nothrow_t *)v8);
  return v11;
}
