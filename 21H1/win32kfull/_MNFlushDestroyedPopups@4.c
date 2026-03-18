/*
 * XREFs of _MNFlushDestroyedPopups@4 @ 0x184561
 * Callers:
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF42A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     NullifyLookasideRef @ 0x184301 (NullifyLookasideRef.c)
 *     _MNFreePopup@8 @ 0x184632 (_MNFreePopup@8.c)
 */

_DWORD *__stdcall MNFlushDestroyedPopups(int a1)
{
  bool v2; // zf
  int v3; // eax
  void *v4; // esi
  int v5; // [esp-8h] [ebp-20h] BYREF
  int v6; // [esp-4h] [ebp-1Ch]
  _DWORD v7[2]; // [esp+8h] [ebp-10h] BYREF
  _DWORD v8[2]; // [esp+10h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0);
  v6 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, v6);
  while ( *(_DWORD *)(*(_DWORD *)v7[0] + 36) )
  {
    v2 = (**(_DWORD **)(*(_DWORD *)v7[0] + 36) & 0x8000) == 0;
    v6 = *(_DWORD *)(*(_DWORD *)v7[0] + 36);
    if ( v2 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v8, v6);
    v3 = *(_DWORD *)(*(_DWORD *)v8[0] + 36);
    v6 = *(_DWORD *)v7[0];
    v5 = v6;
    *(_DWORD *)(v6 + 36) = v3;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v5, *(_DWORD *)v8[0]);
    MNFreePopup(v5, v6);
    if ( (**(_DWORD **)v8[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v8[0] &= ~0x20000000u;
    }
    else
    {
      v4 = *(void **)v8[0];
      NullifyLookasideRef(*(_DWORD **)(*(_DWORD *)v8[0] + 48));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<16384,56>>(v4);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
}
