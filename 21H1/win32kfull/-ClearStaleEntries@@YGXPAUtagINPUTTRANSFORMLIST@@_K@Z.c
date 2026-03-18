/*
 * XREFs of ?ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x15E31A
 * Callers:
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _WPP_RECORDER_SF_i@28 @ 0x15EA15 (_WPP_RECORDER_SF_i@28.c)
 */

void __userpurge ClearStaleEntries(_DWORD *a1@<ecx>, struct tagINPUTTRANSFORMLIST *a2, unsigned __int64 a3)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  __int64 v5; // rax
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // [esp-18h] [ebp-24h]
  int v12; // [esp-14h] [ebp-20h]
  __int64 v13; // [esp-10h] [ebp-1Ch]

  v3 = a1 + 1;
  v4 = (_DWORD *)a1[1];
  if ( v4 != a1 + 1 && v4 != (_DWORD *)a1[2] )
  {
    HIDWORD(v5) = HIDWORD(gqpcAgeLimit);
    if ( gqpcAgeLimit
      || (HIDWORD(v13) = _gliQpcFreq[1], LODWORD(v13) = _gliQpcFreq[0], v5 = 5 * v13, (gqpcAgeLimit = 5 * v13) != 0) )
    {
      v6 = (_DWORD *)*v4;
      if ( (_DWORD *)*v4 != v3 )
      {
        do
        {
          if ( __PAIR64__(a3, (unsigned int)a2) - *((_QWORD *)v4 + 1) > __PAIR64__(HIDWORD(v5), gqpcAgeLimit) )
            break;
          v4 = v6;
          v6 = (_DWORD *)*v6;
        }
        while ( v6 != v3 );
        v7 = (_DWORD *)*v4;
        if ( (_DWORD *)*v4 != v3 )
        {
          v8 = a1;
          do
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_i(v11, v12, v13, v7[2], v7[3]);
              v8 = a1;
            }
            EtwTraceTransformAgeDecay(v8, v7[2], v7[3]);
            v9 = *v7;
            if ( *(_DWORD **)(*v7 + 4) != v7 || (v10 = (_DWORD *)v7[1], (_DWORD *)*v10 != v7) )
              __fastfail(3u);
            *v10 = v9;
            *(_DWORD *)(v9 + 4) = v10;
            Win32FreePool(v7);
            v8 = a1;
            a1[19] |= 2u;
            v7 = (_DWORD *)*v4;
          }
          while ( (_DWORD *)*v4 != v3 );
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(10, 11, &WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids);
    }
  }
}
