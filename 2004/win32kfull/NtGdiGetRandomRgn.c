/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C0076170
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020CE0 (UserGetRedirectedWindowOrigin.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078350 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // r15
  int v8; // r12d
  int v9; // esi
  DC *v10; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rbx
  DC *v14; // [rsp+20h] [rbp-69h] BYREF
  __int64 v15; // [rsp+28h] [rbp-61h]
  struct _POINTL v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-49h] BYREF
  int v19; // [rsp+50h] [rbp-39h]
  __int64 v20; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v21[32]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v22[2]; // [rsp+80h] [rbp-9h] BYREF
  __int16 v23; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+100h] [rbp+77h] BYREF
  int v26; // [rsp+108h] [rbp+7Fh]

  if ( a3 == 5 )
    return 0LL;
  v5 = 0LL;
  if ( a3 == 4 )
  {
    v26 = 1;
    UserEnterUserCritSecShared();
  }
  else
  {
    v26 = 0;
  }
  v14 = 0LL;
  v15 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  v6 = -1;
  v7 = 0LL;
  v8 = 5;
  v9 = -1;
  if ( v14 )
  {
    v22[0] = 0LL;
    v22[1] = 0LL;
    v23 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)&v14, 1);
    if ( (v21[24] & 1) == 0 )
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      if ( v22[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v22);
      DCOBJ::~DCOBJ((DCOBJ *)&v14);
      goto LABEL_30;
    }
    switch ( a3 )
    {
      case 1:
        v5 = *((_QWORD *)v14 + 20);
        break;
      case 2:
        v5 = *((_QWORD *)v14 + 21);
        break;
      case 3:
        v5 = *((_QWORD *)v14 + 20);
        v7 = *((_QWORD *)v14 + 21);
        if ( v5 )
        {
          if ( v7 )
            v8 = 1;
        }
        else
        {
          v5 = *((_QWORD *)v14 + 21);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
          goto LABEL_33;
        v5 = *((_QWORD *)v14 + 140);
        break;
    }
    if ( v5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0);
      if ( v18[0] )
      {
        v17 = v5;
        if ( v8 == 5 )
        {
          v5 = 0LL;
          if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v18, (struct RGNOBJ *)&v17) )
          {
            if ( a3 != 4
              || (*((_DWORD *)v14 + 9) & 0x4000) == 0
              || (v16 = 0LL, (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v16))
              && RGNOBJ::bOffset((RGNOBJ *)v18, &v16) )
            {
              v9 = 1;
            }
          }
        }
        else
        {
          v20 = v7;
          v5 = 0LL;
          if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v18, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v20, v8) )
            v9 = 1;
        }
      }
      else
      {
        v5 = 0LL;
      }
      if ( !v19 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v18);
      if ( v18[0] )
        _InterlockedAdd((volatile signed __int32 *)(v18[0] + 12LL), 0xFFFFFFFF);
      goto LABEL_18;
    }
LABEL_33:
    v9 = v5;
LABEL_18:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    if ( v22[0] != v5 )
      DLODCOBJ::vUnlock((DLODCOBJ *)v22);
    goto LABEL_20;
  }
  EngSetLastError(6u);
LABEL_20:
  v10 = v14;
  if ( v14 )
  {
    if ( (_DWORD)v15 != (_DWORD)v5 && (*((_DWORD *)v14 + 11) & 2) != 0 )
    {
      if ( HIDWORD(v15) == (_DWORD)v5 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v14);
        v10 = v14;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v14, UserAttr);
          v10 = v14;
        }
      }
      *((_DWORD *)v10 + 11) &= ~2u;
      v10 = v14;
      LODWORD(v15) = v5;
    }
    v25 = v5;
    v12 = *(_QWORD *)v10;
    HmgDecrementExclusiveReferenceCountEx(v10, HIDWORD(v15), &v25);
    if ( v25 != (_DWORD)v5 )
      bDeleteDCInternalEx(v12, 0LL);
  }
  v6 = v9;
LABEL_30:
  if ( v26 != (_DWORD)v5 )
    UserLeaveUserCritSec();
  return v6;
}
