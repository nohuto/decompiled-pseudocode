/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B4D10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0130DE4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0293D74 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, _DWORD *a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rdi
  void *v8; // rsi
  struct _FONTOBJ *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // rbx
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  void *v15; // [rsp+68h] [rbp+20h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v15 = 0LL;
  v8 = 0LL;
  v14 = 0;
  v9 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 )
  {
    v14 = *((_DWORD *)v6 + 93);
    v8 = (void *)*((_QWORD *)v6 + 45);
    if ( !v8 )
    {
      v8 = FONTOBJ_pvTrueTypeFontFileUMPD(v9, &v14, &v15);
      if ( v8 )
      {
        v13 = v15;
        *((_QWORD *)v6 + 47) = PsGetCurrentProcess(v11, v10, v12);
        *((_QWORD *)v6 + 45) = v8;
        *((_QWORD *)v6 + 44) = v13;
        *((_DWORD *)v6 + 93) = v14;
      }
    }
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v8 != 0LL ? v14 : 0;
  }
  --*((_DWORD *)v6 + 105);
  return v8;
}
