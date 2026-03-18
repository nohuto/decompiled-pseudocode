/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014E90C
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C0103018 (xxxTranslateAccelerator.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     MNLookUpItem @ 0x1C00A0700 (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C014E9A4 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(unsigned __int64 a1, __int64 **a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v8; // rcx
  unsigned int TopLevelMenuIndex; // eax
  struct _LARGE_STRING *v10; // rbp
  unsigned int v11; // esi
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r8
  _QWORD *v15; // rdi
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // r8
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v24; // [rsp+68h] [rbp-20h]

  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v24 = 0LL;
  v22 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v8, a3);
  v10 = (struct _LARGE_STRING *)TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v13 = (unsigned __int64 *)a2[2];
  v11 = 2;
  if ( !v13 )
    v13 = (unsigned __int64 *)**a2;
  v14 = *v13;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(a1, 0x116u, v14, 0LL, 0, 0, 0LL, 1, 1);
  if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    goto LABEL_3;
  v15 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)v10);
  v16 = (unsigned __int64 *)v15[2];
  if ( v16 )
  {
    v17 = *v16;
    *a4 = v17;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(a1, 0x117u, v17, v10, 0, 0, 0LL, 1, 1);
    if ( (unsigned int)v10 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
LABEL_3:
      *a4 = 0LL;
      v11 = 0;
      goto LABEL_4;
    }
    v18 = *(_DWORD *)(*v15 + 4LL) & 3;
  }
  else
  {
    v18 = 0;
  }
  v19 = v24;
  if ( !v24 )
    v19 = *(_QWORD *)v23[0];
  v20 = (__int64)a2[2];
  v22 = v19;
  if ( !v20 )
    v20 = **a2;
  v21 = MNLookUpItem(v20, a3, 0, &v22);
  SmartObjStackRefBase<tagMENU>::operator=(v23, v22);
  if ( !v21 )
    goto LABEL_3;
  if ( (*(_DWORD *)(*v21 + 4LL) & 3) != 0 || v18 )
    v11 = 3;
LABEL_4:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v23);
  return v11;
}
