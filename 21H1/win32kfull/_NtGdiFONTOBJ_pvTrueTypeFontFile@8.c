/*
 * XREFs of _NtGdiFONTOBJ_pvTrueTypeFontFile@8 @ 0x21A3AE
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YGPAXPAU_FONTOBJ@@PAKPAPAX@Z @ 0x1F3498 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YGPAXPAU_FONTOBJ@@PAKPAPAX@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 */

void *__stdcall NtGdiFONTOBJ_pvTrueTypeFontFile(int a1, ULONG a2)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v5; // edi
  void *v7; // ebx
  struct _FONTOBJ *v8; // eax
  int v9; // esi
  _DWORD *v10; // edx
  unsigned int *v11; // [esp+0h] [ebp-34h]
  void **v12; // [esp+4h] [ebp-30h]
  int v13; // [esp+14h] [ebp-20h] BYREF
  unsigned int v14; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v13 = 0;
  v7 = 0;
  v14 = 0;
  v8 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  if ( v8 )
  {
    v14 = *((_DWORD *)v5 + 49);
    v7 = (void *)*((_DWORD *)v5 + 47);
    if ( !v7 )
    {
      v7 = FONTOBJ_pvTrueTypeFontFileUMPD(&v14, v8, (struct _FONTOBJ *)&v13, v11, v12);
      if ( v7 )
      {
        v9 = v13;
        *((_DWORD *)v5 + 50) = PsGetCurrentProcess();
        *((_DWORD *)v5 + 47) = v7;
        *((_DWORD *)v5 + 46) = v9;
        *((_DWORD *)v5 + 49) = v14;
      }
    }
  }
  v10 = (_DWORD *)a2;
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 >= _MmUserProbeAddress )
      v10 = (_DWORD *)_MmUserProbeAddress;
    *v10 = v7 != 0 ? v14 : 0;
    ms_exc.registration.TryLevel = -2;
  }
  --*((_DWORD *)v5 + 57);
  return v7;
}
