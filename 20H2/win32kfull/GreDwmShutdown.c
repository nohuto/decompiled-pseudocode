/*
 * XREFs of GreDwmShutdown @ 0x1C000E080
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000E204 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C4298 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00C4698 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00C4DFC (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmShutdown(__int64 a1)
{
  _QWORD **v2; // r8
  _QWORD *v3; // rax
  _QWORD **v4; // r8
  _QWORD *v5; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  v12 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v11);
  if ( g_pDwmState )
  {
    ZwSetEvent(*((HANDLE *)g_pDwmState + 42), 0LL);
    ZwClose(*((HANDLE *)g_pDwmState + 42));
    GreSfmDwmShutdown();
    SpRenderHint(&v12, 65537LL, 0LL, 0LL);
    vAccNotify(
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2552) != 0LL)),
      6u,
      0LL);
    GreDeleteObject(*((_QWORD *)g_pDwmState + 23));
    v2 = (_QWORD **)((char *)g_pDwmState + 120);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == v2 )
        break;
      v7 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v8 = (_QWORD *)v3[1], (_QWORD *)*v8 != v3) )
LABEL_14:
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v3[1] = v3;
      *v3 = v3;
    }
    v4 = (_QWORD **)((char *)g_pDwmState + 104);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      v9 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
        goto LABEL_14;
      v10 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v10 != v5 )
        goto LABEL_14;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v5[1] = v5;
      *v5 = v5;
    }
    g_pDwmState = 0LL;
    Win32FreePool(g_pDwmState);
    ++*(_DWORD *)(gpGdiSharedMemory + 1573020LL);
  }
  return LEAVE_GRE_DWM_CRIT(a1, v11);
}
