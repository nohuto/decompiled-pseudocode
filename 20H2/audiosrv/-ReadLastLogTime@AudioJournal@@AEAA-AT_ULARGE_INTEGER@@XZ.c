/*
 * XREFs of ?ReadLastLogTime@AudioJournal@@AEAA?AT_ULARGE_INTEGER@@XZ @ 0x18005340C
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x180053124 (-Initialize@AudioJournal@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

union _ULARGE_INTEGER __fastcall AudioJournal::ReadLastLogTime(AudioJournal *this, _DWORD *a2)
{
  int ValueW; // eax
  bool v5; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+54h] [rbp+Ch]

  v8 = HIDWORD(this);
  *a2 = 0;
  v7 = 8;
  a2[1] = 0;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_18019F4E8, L"LastLogTime", 0x48u, 0LL, a2, &v7);
  if ( ValueW )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ValueW != 2 )
    {
      v5 = ValueW < 0;
      if ( ValueW > 0 )
      {
        ValueW = (unsigned __int16)ValueW | 0x80070000;
        v5 = ValueW < 0;
      }
      if ( v5 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x172,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
          (const char *)(unsigned int)ValueW);
    }
  }
  return (union _ULARGE_INTEGER)a2;
}
