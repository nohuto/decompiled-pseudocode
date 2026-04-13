/*
 * XREFs of tidy_global @ 0x1800B1000
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800B0AE4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B0B74 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Deletegloballocale @ 0x1800B0FB8 (_Deletegloballocale.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  Deletegloballocale(&qword_180198478);
  qword_180198478 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
