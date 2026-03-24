/*
 * XREFs of ??0VIDPNTARGETINFO@@QEAA@XZ @ 0x1C001B810
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 */

VIDPNTARGETINFO *__fastcall VIDPNTARGETINFO::VIDPNTARGETINFO(VIDPNTARGETINFO *this)
{
  *(_DWORD *)this = -1;
  *((_WORD *)this + 2) = 0;
  *((_BYTE *)this + 6) = 0;
  *((_QWORD *)this + 1) = 0LL;
  memset((char *)this + 16, 0, 0xE8uLL);
  return this;
}
