/*
 * XREFs of sub_1800F8760 @ 0x1800F8760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int SoundLevel; // ebx
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF

  SoundLevel = 0;
  v10 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v10[1], v11, (struct _TP_TIMER *)L"s_pbmGetSoundLevel");
  if ( (unsigned int)IsPbmSoundLevelSupported() )
  {
    SoundLevel = PbmGetSoundLevel(a1, a2, a3, a4, a5);
  }
  else if ( qword_18019E618 )
  {
    v18 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
            qword_18019E618,
            a1,
            &v18);
    v15 = v18;
    SoundLevel = v14;
    if ( v14 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 344LL))(
              v18,
              a2,
              a3,
              a4,
              a5);
      v15 = v18;
      SoundLevel = v16;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  sub_18000F690((__int64)pv, v12, v13);
  return SoundLevel;
}
