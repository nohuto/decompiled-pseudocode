/*
 * XREFs of ?GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z @ 0x14005FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x14005FA00 (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolati.c)
 */

__int64 __fastcall CCPAudioHistoryControl::GetAudioHistoryReader(
        CCPAudioHistoryControl *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        struct ICPAudioHistoryReader **a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,int &,VolatileControlData * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
         a5,
         &v9,
         &v10,
         &v11,
         (struct VolatileControlData **)this + 3,
         (struct SharedMessageQueueItem **)this + 2,
         (unsigned int *)this + 9,
         (unsigned int *)this + 10,
         (unsigned int *)this + 11,
         (unsigned __int64 *)this + 6);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
