/*
 * XREFs of _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlGetThreadErrorMode@0 @ 0x4B32E4B0 (_RtlGetThreadErrorMode@0.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        PCEVENT_DESCRIPTOR EventDescriptor,
        char a5)
{
  const EVENT_DESCRIPTOR *v5; // ebx
  char v8; // al
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int StackCookie; // [esp+Ch] [ebp-3Ch] BYREF
  _EVENT_DATA_DESCRIPTOR StackCookie_4; // [esp+10h] [ebp-38h] BYREF
  int v14; // [esp+20h] [ebp-28h]
  int v15; // [esp+24h] [ebp-24h]
  int v16; // [esp+28h] [ebp-20h]
  int v17; // [esp+2Ch] [ebp-1Ch]
  int v18; // [esp+30h] [ebp-18h]
  int v19; // [esp+34h] [ebp-14h]
  int v20; // [esp+38h] [ebp-10h]
  int v21; // [esp+3Ch] [ebp-Ch]

  v5 = EventDescriptor;
  StackCookie = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5
      || (RtlGetThreadErrorMode() & 0x10) == 0
      && (ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessDefaultHardErrorMode, &StackCookie, 4u, 0) >= 0
        ? (v8 = StackCookie)
        : (v8 = 1, StackCookie = 1),
          (v8 & 1) != 0) )
    {
      v9 = *((_DWORD *)a1 + 1);
      v10 = *a1 + 2;
      HIDWORD(StackCookie_4.Ptr) = 0;
      StackCookie_4.Size = 4;
      StackCookie_4.Reserved = 0;
      v14 = v9;
      v15 = 0;
      v16 = v10;
      v17 = 0;
      LODWORD(StackCookie_4.Ptr) = &a3;
      if ( a2 )
      {
        v18 = *((_DWORD *)a2 + 1);
        v11 = *a2;
        v19 = 0;
        v20 = v11 + 2;
        v21 = 0;
        EtwEventWriteNoRegistration(&UserLoaderGuid, v5, 3u, &StackCookie_4);
      }
      else
      {
        EtwEventWriteNoRegistration(&UserLoaderGuid, v5, 2u, &StackCookie_4);
      }
    }
  }
}
