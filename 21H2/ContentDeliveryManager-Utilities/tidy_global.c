/*
 * XREFs of tidy_global @ 0x1800B3500
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800B2FE4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B3074 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Deletegloballocale @ 0x1800B34B8 (_Deletegloballocale.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  Deletegloballocale(&qword_18019C468);
  qword_18019C468 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
