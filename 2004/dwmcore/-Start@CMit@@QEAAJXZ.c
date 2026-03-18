/*
 * XREFs of ?Start@CMit@@QEAAJXZ @ 0x18002AED0
 * Callers:
 *     ?Reset@CMit@@QEAAJXZ @ 0x18002AE80 (-Reset@CMit@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMit::Start(HANDLE *this)
{
  HANDLE v2; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 32) )
  {
    v4 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802DAC38, 2u, -2147467260, 0x5Du, 0LL);
  }
  else
  {
    v2 = CreateThread(0LL, 0LL, CMit::RunInputThreadStatic, this, 4u, &ThreadId);
    this[2] = v2;
    if ( v2 )
    {
      SetThreadDescription(v2, L"DWM Master Input Thread");
      SetThreadPriority(this[2], 16);
      ResumeThread(this[2]);
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802DAC38, 2u, -2147024882, 0x6Fu, 0LL);
    }
  }
  return v4;
}
