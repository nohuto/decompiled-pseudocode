/*
 * XREFs of ??0QpcTimeConverter@@QEAA@XZ @ 0x18002BF98
 * Callers:
 *     ??0CManipulationManager@@IEAA@PEAVCComposition@@@Z @ 0x18002BB38 (--0CManipulationManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x18002BE18 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  BOOL v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2 = QueryPerformanceFrequency(&Frequency);
  v3 = Frequency.QuadPart & -(__int64)v2;
  *(_QWORD *)this = v3;
  if ( v3 > 0x10C6F7A0B5EDLL )
  {
    v5 = *((_QWORD *)this + 1);
    do
    {
      if ( v5 < 0xA )
        break;
      v6 = *(_QWORD *)this / 0xAuLL;
      *(_QWORD *)this = v6;
      v5 /= 0xAuLL;
      *((_QWORD *)this + 1) = v5;
    }
    while ( v6 > 0x10C6F7A0B5EDLL );
  }
  return this;
}
