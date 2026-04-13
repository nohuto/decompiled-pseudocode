/*
 * XREFs of tidy_global @ 0x1800AEDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AE8D4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AE964 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Deletegloballocale @ 0x1800AEDA8 (_Deletegloballocale.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  Deletegloballocale(&qword_180193468);
  qword_180193468 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
