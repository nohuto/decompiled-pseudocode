/*
 * XREFs of _lambda_af777b2df126523fb74d62acd9a62439_::operator() @ 0x18006E7B0
 * Callers:
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x180052B5C (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 * Callees:
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18004558C (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x180052718 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062370 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x1800D955C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800D95B8 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall lambda_af777b2df126523fb74d62acd9a62439_::operator()(__int64 a1)
{
  unsigned __int16 **v2; // r8
  __int64 v3; // rdx
  HRESULT UBound; // ebx
  __int64 v6; // rcx
  SIZE_T v7; // rsi
  int v8; // r8d
  __int64 v9; // rdx
  unsigned int v10; // edi
  LONG v11; // eax
  __int64 v12; // rax
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r9
  char *v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _WORD *v21; // r9
  int Element; // eax
  char *v23; // r8
  unsigned __int64 v24; // rdx
  char *v25; // rcx
  char *v26; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  LONG plUbound; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 rgIndices; // [rsp+58h] [rbp+38h] BYREF

  if ( !CAudioSessionStore::IsValidProperty((CAudioSessionStore *)a1, **(const struct tagPROPVARIANT ***)(a1 + 8)) )
  {
    v3 = 3307LL;
LABEL_3:
    UBound = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)UBound);
    return (unsigned int)UBound;
  }
  plUbound = 0;
  v6 = (__int64)*v2;
  v7 = 24LL;
  v8 = **v2;
  switch ( v8 )
  {
    case 8:
      goto LABEL_31;
    case 30:
      UBound = StringCbLengthA(*(const char **)(v6 + 8), (unsigned int)(v8 - 30), &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 3358LL;
        goto LABEL_4;
      }
      if ( rgIndices > 0x400 )
      {
        v9 = 3359LL;
        goto LABEL_19;
      }
      v7 = rgIndices + 25;
      goto LABEL_39;
    case 31:
LABEL_31:
      v13 = *(const unsigned __int16 **)(v6 + 8);
      if ( (_WORD)v8 == 8 )
      {
        UBound = StringCbLengthW(v13, 0x7FFFFFFFuLL, &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 3342LL;
          goto LABEL_4;
        }
      }
      else
      {
        UBound = StringCbLengthW(v13, 0x7FFFFFFFuLL, &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 3346LL;
          goto LABEL_4;
        }
      }
      if ( rgIndices > 0x400 )
      {
        v9 = 3349LL;
        goto LABEL_19;
      }
      v7 = rgIndices + 26;
      goto LABEL_39;
    case 65:
    case 70:
      v12 = *(unsigned int *)(v6 + 8);
      if ( (unsigned int)v12 > 0x400 )
      {
        v9 = 3316LL;
        goto LABEL_19;
      }
      v7 = v12 + 24;
      goto LABEL_39;
  }
  if ( v8 != 8196 )
    goto LABEL_39;
  if ( SafeArrayGetDim(*(SAFEARRAY **)(v6 + 8)) != 1 )
  {
    v3 = 3322LL;
    goto LABEL_3;
  }
  if ( SafeArrayGetElemsize(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL)) != 4 )
  {
    v3 = 3323LL;
    goto LABEL_3;
  }
  UBound = SafeArrayGetUBound(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), 1u, &plUbound);
  if ( UBound < 0 )
  {
    v3 = 3324LL;
    goto LABEL_4;
  }
  if ( plUbound >= 0 )
  {
    v11 = plUbound + 1;
    plUbound = v11;
    if ( (unsigned int)v11 > 0x100 )
    {
      v9 = 3331LL;
      goto LABEL_19;
    }
    v7 = 4LL * v11 + 24;
LABEL_39:
    v14 = (char *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( !v14 )
    {
      v10 = -2147024882;
      v16 = 3372LL;
      v17 = 2147942414LL;
LABEL_61:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v17);
      goto LABEL_64;
    }
    v18 = v14 + 24;
    v19 = **(_QWORD **)(a1 + 8);
    *(_OWORD *)v14 = *(_OWORD *)v19;
    *((_QWORD *)v14 + 2) = *(_QWORD *)(v19 + 16);
    v20 = *(_QWORD **)(a1 + 8);
    v21 = (_WORD *)*v20;
    if ( *(_WORD *)*v20 != 8 )
    {
      if ( *(_WORD *)*v20 == 30 )
      {
        Element = StringCchCopyA(v15 + 24, v7 - 24, *((const char **)v21 + 1));
        v10 = Element;
        if ( Element < 0 )
        {
          v16 = 3420LL;
LABEL_60:
          v17 = (unsigned int)Element;
          goto LABEL_61;
        }
LABEL_62:
        *((_QWORD *)v15 + 1) = 24LL;
        goto LABEL_63;
      }
      if ( *(_WORD *)*v20 != 31 )
      {
        if ( *(_WORD *)*v20 == 65 || *(_WORD *)*v20 == 70 )
        {
          memcpy_0(v15 + 24, *((const void **)v21 + 2), *((unsigned int *)v21 + 2));
          *((_QWORD *)v15 + 2) = 24LL;
        }
        else if ( *(_WORD *)*v20 == 8196 )
        {
          LODWORD(rgIndices) = 0;
          *((_QWORD *)v15 + 1) = 24LL;
          if ( plUbound > 0 )
          {
            while ( 1 )
            {
              Element = SafeArrayGetElement(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), (LONG *)&rgIndices, v18);
              v10 = Element;
              if ( Element < 0 )
                break;
              v18 += 4;
              LODWORD(rgIndices) = rgIndices + 1;
              if ( (int)rgIndices >= plUbound )
                goto LABEL_63;
            }
            v16 = 3395LL;
            goto LABEL_60;
          }
        }
LABEL_63:
        ***(_QWORD ***)(a1 + 16) = v7;
        v26 = v15;
        v15 = 0LL;
        v10 = 0;
        **(_QWORD **)(a1 + 24) = v26;
LABEL_64:
        if ( v15 )
          operator delete(v15, (const struct std::nothrow_t *)1);
        return v10;
      }
    }
    v23 = (char *)*((_QWORD *)v21 + 1);
    v24 = v7 - 24;
    v25 = v15 + 24;
    if ( *(_WORD *)*v20 == 8 )
    {
      Element = StringCbCopyW(v25, v24, v23);
      v10 = Element;
      if ( Element < 0 )
      {
        v16 = 3406LL;
        goto LABEL_60;
      }
    }
    else
    {
      Element = StringCbCopyW(v25, v24, v23);
      v10 = Element;
      if ( Element < 0 )
      {
        v16 = 3411LL;
        goto LABEL_60;
      }
    }
    goto LABEL_62;
  }
  v9 = 3325LL;
LABEL_19:
  v10 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x8007000ELL);
  return v10;
}
