/*
 * XREFs of NtGdiCLIPOBJ_cEnumStart @ 0x1C02B1270
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0292CD0 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_cEnumStart(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  unsigned int v12; // edi
  XCLIPOBJ *v13; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
LABEL_7:
    v12 = -1;
    goto LABEL_8;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v12 = -1;
  v13 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v13 )
    goto LABEL_8;
  if ( (*((_DWORD *)v11 + 103) & 0x100) != 0 && !*((_QWORD *)v13 + 7) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_cEnumStart:!peco->bValid()\n",
        2574);
    goto LABEL_7;
  }
  v12 = XCLIPOBJ::cEnumStart(v13, a2, a3, a4, a5);
LABEL_8:
  if ( v11 )
    --*((_DWORD *)v11 + 105);
  return v12;
}
