/*
 * XREFs of ?vInit@EFSMEMOBJ@@QAEXPAVDCOBJ@@KKPAXI@Z @ 0x88C0A
 * Callers:
 *     ??0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z @ 0x88BBA (--0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall EFSMEMOBJ::vInit(
        EFSMEMOBJ *this,
        struct DCOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int a6)
{
  *(_DWORD *)(*(_DWORD *)this + 24) = *(_DWORD *)this + 40;
  *(_DWORD *)(*(_DWORD *)this + 32) = *(_DWORD *)this + 40;
  *(_DWORD *)(*(_DWORD *)this + 28) = *(_DWORD *)this + 8 * (a3 + 5);
  **(_DWORD **)this = 0;
  *(_DWORD *)(*(_DWORD *)this + 4) = a4;
  *(_DWORD *)(*(_DWORD *)this + 36) = 0;
  *(_DWORD *)(*(_DWORD *)this + 8) = a5;
  *(_DWORD *)(*(_DWORD *)this + 12) = a6;
  *(_DWORD *)(*(_DWORD *)this + 16) = 0;
  *(_DWORD *)(*(_DWORD *)this + 20) = a2;
}
