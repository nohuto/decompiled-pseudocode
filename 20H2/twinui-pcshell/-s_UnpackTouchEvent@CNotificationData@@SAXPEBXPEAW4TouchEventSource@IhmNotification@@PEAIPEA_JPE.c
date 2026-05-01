/*
 * XREFs of ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x1800F00C8
 * Callers:
 *     ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1800B237C (-HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x18008DA14 (memcpy_s_0.c)
 */

void __fastcall CNotificationData::s_UnpackTouchEvent(
        __int64 *a1,
        enum IhmNotification::TouchEventSource *a2,
        unsigned int *a3,
        __int64 *a4,
        unsigned int *a5,
        bool *a6,
        bool *a7)
{
  char v11; // dl
  __int64 Destination; // [rsp+50h] [rbp+30h] BYREF
  __int64 Source; // [rsp+58h] [rbp+38h] BYREF

  Source = a1[1];
  memcpy_s_0(&Destination, 4uLL, &Source, 4uLL);
  *a3 = Destination;
  Source = a1[2];
  memcpy_s_0(&Destination, 4uLL, &Source, 4uLL);
  *a5 = Destination;
  Destination = *a1;
  memcpy_s_0(&a5, 8uLL, &Destination, 8uLL);
  *a4 = (WORD2(a5) << 16) | (unsigned __int16)a5;
  Destination = a1[3];
  memcpy_s_0(&a5, 4uLL, &Destination, 4uLL);
  v11 = BYTE1(a5) >> 1;
  *a7 = BYTE1(a5) & 1;
  *a6 = v11 & 1;
  *(_DWORD *)a2 = (unsigned __int8)a5;
}
