/*
 * XREFs of _NtUserInjectGesture@20 @ 0x16561B
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _AllocGestureInfo@16 @ 0x188710 (_AllocGestureInfo@16.c)
 *     _PostGestureMessage@8 @ 0x188A48 (_PostGestureMessage@8.c)
 *     _ValidateGestureCaller@8 @ 0x188BF0 (_ValidateGestureCaller@8.c)
 *     _ValidateGestureInfo@4 @ 0x188C68 (_ValidateGestureInfo@4.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 */

int __stdcall NtUserInjectGesture(int a1, int a2, int a3, unsigned int a4, volatile void *Address)
{
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  const void *v8; // edi
  int v9; // eax
  volatile void *v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // edi
  void *v15; // [esp-4h] [ebp-B4h]
  SIZE_T v16[12]; // [esp+10h] [ebp-A0h] BYREF
  int v17[12]; // [esp+40h] [ebp-70h] BYREF
  _BYTE v18[8]; // [esp+70h] [ebp-40h] BYREF
  int v19; // [esp+7Ch] [ebp-34h] BYREF
  int v20; // [esp+80h] [ebp-30h]
  int v21; // [esp+84h] [ebp-2Ch]
  int v22; // [esp+88h] [ebp-28h]
  int v23; // [esp+90h] [ebp-20h]
  volatile void *v24; // [esp+94h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+98h] [ebp-18h]

  v5 = 0;
  memset(v17, 0, sizeof(v17));
  v24 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v6 = ValidateHwnd(a1);
  v23 = v6;
  if ( v6 )
  {
    v19 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v19;
    v20 = v6;
    HMLockObject(v6);
    if ( a3 || (v8 = (const void *)a4) == 0 || a2 )
    {
      v7 = 87;
    }
    else
    {
      v9 = *(_DWORD *)(v6 + 20);
      if ( *(char *)(v9 + 12) >= 0 && *(char *)(v9 + 11) >= 0 )
      {
        if ( ValidateGestureCaller(_gptiCurrent, v6) )
        {
          ms_exc.registration.TryLevel = 0;
          if ( a4 + 48 < a4 || a4 + 48 > _MmUserProbeAddress )
            v8 = (const void *)_MmUserProbeAddress;
          qmemcpy(v16, v8, sizeof(v16));
          qmemcpy(v17, v16, sizeof(v17));
          if ( v16[10] )
          {
            if ( Address )
            {
LABEL_17:
              v10 = Address;
              if ( Address )
              {
                ProbeForRead(Address, v16[10], 1u);
                v24 = Address;
              }
              else
              {
                v10 = 0;
              }
              ms_exc.registration.TryLevel = -2;
              if ( ValidateGestureInfo(v17) )
              {
                v15 = (void *)v10;
                v11 = v23;
                v12 = AllocGestureInfo((int)v17, v15);
                v13 = v12;
                if ( v12 )
                {
                  EtwTracePostInjectedGestureMessage(v11, v12);
                  v5 = PostGestureMessage(v11, v13);
                  if ( !v5 )
                    _FreeGestureInfo(v13, 1);
                }
              }
              goto LABEL_26;
            }
          }
          else if ( !Address )
          {
            goto LABEL_17;
          }
          v22 = 0;
          UserSetLastError((struct _NT_TIB *)0x57);
          ms_exc.registration.TryLevel = -2;
        }
LABEL_26:
        ThreadUnlock1();
        goto LABEL_27;
      }
      v7 = 1400;
    }
    UserSetLastError((struct _NT_TIB *)v7);
    goto LABEL_26;
  }
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit();
  return v5;
}
