/*
 * XREFs of ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800043AC
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010F60 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x1800045A0 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800047C0 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5553@Z @ 0x18012E5F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U1@.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchAndWaitForADGStartup(CAudioDGProcess *this, bool a2)
{
  ULONGLONG TickCount64; // rax
  ULONGLONG v5; // r14
  unsigned int v6; // ebx
  int v7; // edi
  ULONGLONG v8; // rax
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  double v12; // xmm0_8
  int v14; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v16; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+6Ch] [rbp-14h] BYREF
  double v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+78h] [rbp-8h] BYREF
  double v20; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+48h] BYREF

  TickCount64 = GetTickCount64();
  v21 = 0;
  v5 = TickCount64;
  v6 = 0;
  v7 = CAudioDGProcess::LaunchADGProcess(this, a2);
  if ( v7 >= 0 )
    v6 = CAudioDGProcess::WaitForADGStartup(this, &v21);
  v8 = GetTickCount64();
  v11 = v8 - v5;
  if ( (__int64)(v8 - v5) < 0 )
  {
    v11 &= 1u;
    v12 = (double)(int)(v11 | ((v8 - v5) >> 1)) + (double)(int)(v11 | ((v8 - v5) >> 1));
  }
  else
  {
    v12 = (double)v11;
  }
  v20 = v12 / 1000.0;
  if ( (unsigned int)dword_18019D4E8 > 4
    && (qword_18019D4F8 & 0x200000000000LL) != 0
    && (qword_18019D500 & 0x200000000000LL) == qword_18019D500 )
  {
    v18 = v20;
    v14 = *((_DWORD *)this + 24);
    v15 = v21;
    v16 = v6;
    v17 = v7;
    LOBYTE(v20) = a2;
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_18016D4B0,
      v9,
      v10,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v18);
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v6;
}
