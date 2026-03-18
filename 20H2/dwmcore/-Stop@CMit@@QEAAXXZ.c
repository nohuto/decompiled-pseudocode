/*
 * XREFs of ?Stop@CMit@@QEAAXXZ @ 0x1802306FC
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x18021F21C (--1CInputManager@@MEAA@XZ.c)
 *     ??1CMit@@UEAA@XZ @ 0x180230674 (--1CMit@@UEAA@XZ.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x180230758 (--1CGlobalMit@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMit::Stop(CMit *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 2) == 0LL;
  *((_BYTE *)this + 32) = 1;
  if ( !v1 )
  {
    SetEvent(*((HANDLE *)this + 3));
    WaitForSingleObject(*((HANDLE *)this + 2), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
