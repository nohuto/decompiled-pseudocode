/*
 * XREFs of _RtlCutoverTimeToSystemTime@16 @ 0x4B2DCAE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTimeToTimeFields@12 @ 0x4B2DCCE0 (_RtlpTimeToTimeFields@12.c)
 *     _RtlpTimeFieldsToTime@12 @ 0x4B2DCF80 (_RtlpTimeFieldsToTime@12.c)
 */

BOOLEAN __cdecl RtlCutoverTimeToSystemTime(
        PTIME_FIELDS CutoverTime,
        PLARGE_INTEGER SystemTime,
        PLARGE_INTEGER CurrentSystemTime,
        BOOLEAN ThisYear)
{
  PLARGE_INTEGER v4; // ebx
  PTIME_FIELDS v5; // edi
  CSHORT Day; // ax
  CSHORT Month; // cx
  int v8; // esi
  __int16 v9; // cx
  __int16 v10; // dx
  __int16 v11; // ax
  __int16 v12; // bx
  int v13; // esi
  int v14; // edx
  BOOLEAN result; // al
  bool v16; // [esp+13h] [ebp-55h]
  int v17; // [esp+14h] [ebp-54h]
  __int16 v18; // [esp+18h] [ebp-50h]
  __int16 v19; // [esp+1Ch] [ebp-4Ch]
  __int16 v20; // [esp+24h] [ebp-44h]
  CSHORT Weekday; // [esp+28h] [ebp-40h]
  __int64 v22; // [esp+30h] [ebp-38h] BYREF
  _WORD v23[2]; // [esp+38h] [ebp-30h] BYREF
  __int16 v24; // [esp+3Ch] [ebp-2Ch]
  CSHORT Hour; // [esp+3Eh] [ebp-2Ah]
  CSHORT Minute; // [esp+40h] [ebp-28h]
  CSHORT Second; // [esp+42h] [ebp-26h]
  CSHORT Milliseconds; // [esp+44h] [ebp-24h]
  __int16 v29; // [esp+46h] [ebp-22h]
  unsigned __int16 v30; // [esp+48h] [ebp-20h] BYREF
  CSHORT v31; // [esp+4Ah] [ebp-1Eh]
  __int16 v32; // [esp+4Ch] [ebp-1Ch]
  char v33[4]; // [esp+58h] [ebp-10h] BYREF
  __int16 v34; // [esp+5Ch] [ebp-Ch]
  __int16 v35; // [esp+66h] [ebp-2h]

  v4 = CurrentSystemTime;
  RtlpTimeToTimeFields(CurrentSystemTime, &v30, 0);
  v5 = CutoverTime;
  if ( !CutoverTime->Year )
  {
    Day = CutoverTime->Day;
    v20 = Day;
    if ( Day <= 5 && Day )
    {
      Weekday = CutoverTime->Weekday;
      Month = CutoverTime->Month;
      v16 = 0;
      if ( ThisYear )
      {
        v8 = v30;
      }
      else
      {
        if ( Month >= v31 )
        {
          v8 = v30;
          v17 = v30;
          v16 = Month <= v31;
          goto LABEL_7;
        }
        v8 = (unsigned __int16)(v30 + 1);
      }
      v17 = v8;
LABEL_7:
      v23[1] = CutoverTime->Month;
      v29 = 0;
      while ( 1 )
      {
        v23[0] = v8;
        Hour = v5->Hour;
        Minute = v5->Minute;
        Second = v5->Second;
        Milliseconds = v5->Milliseconds;
        v19 = 1;
        v24 = 1;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v23, &v22, 0) )
          return 0;
        RtlpTimeToTimeFields(&v22, v33, 0);
        if ( v35 > Weekday )
          break;
        v10 = 1;
        if ( v35 < Weekday )
        {
          v9 = Weekday - v35 + 1;
          v10 = v9;
          goto LABEL_11;
        }
LABEL_12:
        v11 = v10;
        v18 = v10;
        if ( v20 > 1 )
        {
          v12 = v19;
          v13 = 1;
          v18 = v10;
          while ( 1 )
          {
            v12 += 7;
            v24 = v12;
            if ( !(unsigned __int8)RtlpTimeFieldsToTime(v23, &v22, 0) )
              break;
            RtlpTimeToTimeFields(&v22, v33, 0);
            v11 = v34;
            ++v13;
            v18 = v34;
            if ( (__int16)v13 >= v20 )
              goto LABEL_16;
          }
          v11 = v18;
LABEL_16:
          v5 = CutoverTime;
          v8 = v17;
          v4 = CurrentSystemTime;
        }
        v24 = v11;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v23, &v22, 0) )
          return 0;
        v14 = HIDWORD(v22);
        if ( !v16 || v18 >= v32 && (v18 != v32 || v22 >= v4->QuadPart) )
        {
          result = 1;
          SystemTime->LowPart = v22;
          SystemTime->HighPart = v14;
          return result;
        }
        ++v8;
        v16 = 0;
        v17 = v8;
      }
      v9 = Weekday - v35 + 8;
      v10 = v9;
LABEL_11:
      v19 = v9;
      goto LABEL_12;
    }
    return 0;
  }
  return (unsigned __int8)RtlpTimeFieldsToTime(CutoverTime, SystemTime, 0)
      && (ThisYear || SystemTime->QuadPart >= CurrentSystemTime->QuadPart);
}
