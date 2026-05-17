/*
 * XREFs of _LdrpResValidateFilePath@4 @ 0x4B343BC4
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480 (_RtlDetermineDosPathNameType_U@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70 (_RtlDosPathNameToNtPathName_U@16.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __thiscall LdrpResValidateFilePath(__int16 *this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int AttributesFile; // edi
  int v6; // eax
  int v7; // esi
  int v8; // esi
  _DWORD v10[6]; // [esp+14h] [ebp-78h] BYREF
  unsigned __int16 v11; // [esp+2Ch] [ebp-60h] BYREF
  int v12; // [esp+30h] [ebp-5Ch]
  unsigned __int16 v13[2]; // [esp+34h] [ebp-58h] BYREF
  const wchar_t *v14; // [esp+38h] [ebp-54h]
  unsigned __int16 v15[2]; // [esp+3Ch] [ebp-50h] BYREF
  const wchar_t *v16; // [esp+40h] [ebp-4Ch]
  _BYTE v17[44]; // [esp+48h] [ebp-44h] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v15[0] = 58;
  v15[1] = 60;
  v16 = L"LdrpResValidateFilePath Enter";
  v13[0] = 56;
  v13[1] = 58;
  v14 = L"LdrpResValidateFilePath Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v2 = 2147353477;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    v3 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v4 = 2147353476;
    LdrpTraceLoadMUIDll(v15, *(unsigned __int8 *)v4);
  }
  else
  {
    v3 = 2147353476;
  }
  if ( this
    && ((ms_exc.registration.TryLevel = 0,
         v6 = RtlDetermineDosPathNameType_U(this),
         ms_exc.registration.TryLevel = -2,
         v6 == 1)
     || v6 == 2
     || v6 == 6) )
  {
    if ( RtlDosPathNameToNtPathName_U((int)this, &v11, 0, 0) )
    {
      v7 = v12;
      v10[0] = 24;
      v10[1] = 0;
      v10[3] = 64;
      v10[2] = &v11;
      v10[4] = 0;
      v10[5] = 0;
      AttributesFile = ZwQueryAttributesFile((int)v10, (int)v17);
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
      if ( AttributesFile >= 0 )
        AttributesFile = (v17[32] & 0x10) != 0 ? 0xC000000D : 0;
    }
    else
    {
      AttributesFile = -1073741766;
    }
  }
  else
  {
    AttributesFile = -1073741811;
  }
  v8 = 2147353477;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v13, *(unsigned __int8 *)v3);
  }
  return AttributesFile;
}
