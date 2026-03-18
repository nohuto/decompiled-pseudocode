/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1C02B1130
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B520 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C014A574 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0292CD0 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, unsigned int a2, char *a3)
{
  unsigned int v4; // edi
  int v5; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rbx
  unsigned __int64 v11; // rax
  XCLIPOBJ *v12; // r14
  char *v13; // rax
  char *v14; // rbp
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = -1;
  v5 = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v4 = 0;
    goto LABEL_16;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  v12 = (XCLIPOBJ *)v11;
  if ( !v11 )
    goto LABEL_15;
  if ( (*((_DWORD *)v10 + 103) & 0x100) == 0 || *(_QWORD *)(v11 + 56) )
  {
    if ( a2 <= 0x2710000 )
    {
      v13 = (char *)PALLOCMEM2(a2, 1886221639LL, 0);
      v14 = v13;
      if ( v13 )
      {
        v16 = 0;
        v5 = XCLIPOBJ::bEnum(v12, a2, v13, &v16);
        if ( v5 != -1 && !(unsigned int)bSafeCopyBits(a3, v14, v16) )
          v5 = -1;
        Win32FreePool(v14);
      }
    }
LABEL_15:
    v4 = v5;
    goto LABEL_16;
  }
  if ( gfUMPDDebug )
    DbgPrint(
      "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_bEnum:!peco->bValid()\n",
      2605);
LABEL_16:
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return v4;
}
